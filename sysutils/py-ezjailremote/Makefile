# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/sysutils/py-ezjailremote/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	ezjailremote
PORTVERSION=	0.2.2
PORTREVISION=	1
CATEGORIES=	sysutils python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Remote control and convenience wrapper for ezjail

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	ezjail-admin:sysutils/ezjail \
		${PYTHON_PKGNAMEPREFIX}fabric>0:devel/py-fabric

USE_GITHUB=	yes
GH_ACCOUNT=	tomster
GH_PROJECT=	ezjail-remote

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
