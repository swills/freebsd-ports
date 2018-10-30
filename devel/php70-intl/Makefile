# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: head/devel/php70-intl/Makefile 482830 2018-10-23 11:35:03Z jbeich $

PORTREVISION=	1
CATEGORIES=	devel

MASTERDIR=	${.CURDIR}/../../lang/php70

PKGNAMESUFFIX=	-intl

USES=		compiler:c++11-lib
USE_CXXSTD=	gnu++11

CPPFLAGS+=	-DU_USING_ICU_NAMESPACE=1

.include "${MASTERDIR}/Makefile"
