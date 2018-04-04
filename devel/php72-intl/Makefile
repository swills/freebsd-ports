# $FreeBSD: head/devel/php72-intl/Makefile 466398 2018-04-04 08:20:59Z jbeich $

CATEGORIES=	devel

MASTERDIR=	${.CURDIR}/../../lang/php72

PKGNAMESUFFIX=	-intl

USES=		compiler:c++11-lib
USE_CXXSTD=	gnu++11

CPPFLAGS+=	-DU_USING_ICU_NAMESPACE=1

.include "${MASTERDIR}/Makefile"
