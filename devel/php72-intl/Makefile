# $FreeBSD: head/devel/php72-intl/Makefile 466648 2018-04-06 15:53:16Z jbeich $

PORTREVISION=	1
CATEGORIES=	devel

MASTERDIR=	${.CURDIR}/../../lang/php72

PKGNAMESUFFIX=	-intl

USES=		compiler:c++11-lib
USE_CXXSTD=	gnu++11

CPPFLAGS+=	-DU_USING_ICU_NAMESPACE=1

.include "${MASTERDIR}/Makefile"
