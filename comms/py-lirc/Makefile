# Created by: Lewis Thompson (purple@lewiz.net)
# $FreeBSD: head/comms/py-lirc/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	lirc
PORTVERSION=	0.0.5
PORTREVISION=	4
CATEGORIES=	comms python
MASTER_SITES=	SF/py${PORTNAME}/py${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pylirc-${PORTVERSION}

MAINTAINER=	lewiz@compsoc.man.ac.uk
COMMENT=	Lirc support library for Python

LIB_DEPENDS=	liblirc_client.so:comms/lirc

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/pylircmodule.so

USES=			python
USE_PYTHON=		distutils pythonprefix
PYDISTUTILS_PKGNAME=	pylirc

.include <bsd.port.mk>
