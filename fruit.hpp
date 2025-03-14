#pragma once 

enum class Color { Red, Orange, Green, Violet};

enum class FruitType{ Apple, Orange, Plum};

struct Fruit{
    Color color;
    FruitType fruit;
}

static constexpr dobre_jablko = Fruit{Color::Red, FruitType::Apple};
static constexpr zle_jablko = Fruit{Color::Green, FruitType::Apple};
static constexpr pomarancz = Fruit{Color::Orange, FruitType::Orange};
static constexpr sliwka = Fruit{Color::Violet, FruitType::Plum};

