# $FreeBSD: head/devel/php71-intl/Makefile 475229 2018-07-24 08:44:32Z tz $

CATEGORIES=	devel

MASTERDIR=	${.CURDIR}/../../lang/php71

PKGNAMESUFFIX=	-intl

USES=		compiler:c++11-lib
USE_CXXSTD=	gnu++11

CPPFLAGS+=	-DU_USING_ICU_NAMESPACE=1

TEST_TARGET=    test

.include "${MASTERDIR}/Makefile"
