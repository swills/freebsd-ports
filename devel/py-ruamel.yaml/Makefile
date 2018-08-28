# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-ruamel.yaml/Makefile 478160 2018-08-26 18:59:24Z pi $

PORTNAME=	ruamel.yaml
DISTVERSION=	0.15.61
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	pi@FreeBSD.org
COMMENT=	YAML 1.2 loader/dumper package for Python

LICENSE=	MIT

USES=		python
USE_PYTHON=	distutils autoplist

post-extract:
	@${RM} ${WRKSRC}/LICENSE

.include <bsd.port.mk>
