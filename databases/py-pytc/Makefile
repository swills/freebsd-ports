# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/databases/py-pytc/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	pytc
PORTVERSION=	0.8
PORTREVISION=	7
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Tokyo Cabinet Python bindings

LIB_DEPENDS=	libtokyocabinet.so:databases/tokyocabinet

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} -e 's,%%LOCALBASE%%,${LOCALBASE},' ${WRKSRC}/setup.py

.include <bsd.port.post.mk>
