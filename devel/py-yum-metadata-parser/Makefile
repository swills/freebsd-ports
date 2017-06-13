# Created by: Anders F Bjorklund <afb@rpm5.org>
# $FreeBSD: head/devel/py-yum-metadata-parser/Makefile 430761 2017-01-07 01:07:55Z adamw $

PORTNAME=	yum-metadata-parser
PORTVERSION=	1.1.4
PORTREVISION=	4
CATEGORIES=	devel python
MASTER_SITES=	http://yum.baseurl.org/download/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	afb@rpm5.org
COMMENT=	Fast metadata parser for yum

LIB_DEPENDS=	libxml2.so:textproc/libxml2 \
		libsqlite3.so:databases/sqlite3

USES=		pkgconfig python
USE_GNOME=	glib20
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
