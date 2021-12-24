#ifdef IS_ANIMAL
# define CAT "cat"
#endif

int main(void) {
    return 0;
}

#if defined(IS_ANIMAL)
# define CAT "cat"
#endif
