# $FreeBSD: head/devel/php73-intl/Makefile 490239 2019-01-14 11:05:43Z tz $

CATEGORIES=	devel

MASTERDIR=	${.CURDIR}/../../lang/php73

PKGNAMESUFFIX=	-intl

USES=		compiler:c++11-lib
USE_CXXSTD=	gnu++11

CPPFLAGS+=	-DU_USING_ICU_NAMESPACE=1

TEST_TARGET=    test

.include "${MASTERDIR}/Makefile"
