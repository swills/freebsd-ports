# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-ruamel.yaml/Makefile 472716 2018-06-18 20:56:28Z pi $

PORTNAME=	ruamel.yaml
DISTVERSION=	0.15.40
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
