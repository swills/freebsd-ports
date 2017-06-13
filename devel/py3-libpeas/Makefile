# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/devel/py3-libpeas/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	libpeas
PORTREVISION=	0
CATEGORIES=	devel gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome3
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

COMMENT=	libpeas Python 3 support

LIB_DEPENDS+=	libpeas-1.0.so:devel/libpeas

LIBPEAS_SLAVE=	python3

BUILD_WRKSRC=	${WRKSRC}/loaders/python3
INSTALL_WRKSRC=	${WRKSRC}/loaders/python3

MASTERDIR=	${.CURDIR}/../../devel/libpeas/

.include "${MASTERDIR}/Makefile"
