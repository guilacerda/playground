from flask import Flask, jsonify, send_file
from pdf2text import get_menu

app = Flask(__name__)
app.config['JSON_AS_ASCII'] = False

days = {
    'sunday': 'Domingo',
    'monday': 'Segunda-feira',
    'tuesday': 'Terça-feira',
    'wednesday': 'Quarta-feira',
    'thursday': 'Quinta-feira',
    'friday': 'Sexta-feira',
    'saturday': 'Sábado'
}

@app.route('/cardapio/<day>/')
def menu_day(day):
    menu = get_menu()
    day = days[day.lower()]
    return jsonify(menu[day])

@app.route('/cardapio/<day>/<meal>/')
def menu_specific_meal(day, meal):
    menu = get_menu()
    day = days[day.lower()]
    meal = meal.upper()
    return jsonify(menu[day][meal])

if __name__ == '__main__':
    app.run(debug=True, host='0.0.0.0')
