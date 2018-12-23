# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-ruamel.yaml/Makefile 488176 2018-12-23 09:14:40Z pi $

PORTNAME=	ruamel.yaml
DISTVERSION=	0.15.81
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
