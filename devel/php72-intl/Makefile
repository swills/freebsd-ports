# $FreeBSD: head/devel/php72-intl/Makefile 484627 2018-11-10 17:33:27Z joneum $

CATEGORIES=	devel

MASTERDIR=	${.CURDIR}/../../lang/php72

PKGNAMESUFFIX=	-intl

USES=		compiler:c++11-lib
USE_CXXSTD=	gnu++11

CPPFLAGS+=	-DU_USING_ICU_NAMESPACE=1

TEST_TARGET=    test

.include "${MASTERDIR}/Makefile"
