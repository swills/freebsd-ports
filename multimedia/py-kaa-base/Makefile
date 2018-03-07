# Created by: J.R. Oldroyd <fbsd@opal.com>
# $FreeBSD: head/multimedia/py-kaa-base/Makefile 463452 2018-03-02 22:34:53Z brooks $

PORTNAME=	kaa-base
PORTVERSION=	0.6.0
PORTREVISION=	9
CATEGORIES=	multimedia python
MASTER_SITES=	SF/freevo/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	fbsd@opal.com
COMMENT=	Kaa Media Repository

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/libxml2.py:textproc/py-libxml2@${FLAVOR} \
		${PYTHON_SITELIBDIR}/pygame/__init__.py:devel/py-game@${FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python:2.7
USE_GNOME=	glib20
USE_PYTHON=	distutils autoplist
CFLAGS+=	-D_WANT_SEMUN

.include <bsd.port.mk>
