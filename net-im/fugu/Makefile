# Created by: Peter Haight <peterh@sapros.com>
# $FreeBSD: head/net-im/fugu/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	fugu
PORTVERSION=	1.2.3
PORTREVISION=	1
CATEGORIES=	net-im python
MASTER_SITES=	http://fugu.gale.org/dist/

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Graphical client for the Gale instant messaging system

LICENSE=	GPLv2

RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}Pmw>0:x11-toolkits/py-Pmw@${PY_FLAVOR}

USES=		python:2.7 ssl
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
