#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

class TacticalMarine
{
private:

public:
    TacticalMarine();
    virtual ~TacticalMarine();
    TacticalMarine(TacticalMarine const &other);
    TacticalMarine &operator=(TacticalMarine const &other);
};

#endif
