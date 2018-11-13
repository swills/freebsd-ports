# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/databases/iowow/Makefile 484394 2018-11-07 11:14:33Z danfe $

PORTNAME=	iowow
PORTVERSION=	1.2.14
DISTVERSIONPREFIX=	v
CATEGORIES=	databases

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Persistent key-value database engine

LICENSE=	MIT

USES=		cmake:outsource compiler:c11
USE_GITHUB=	yes
GH_ACCOUNT=	Softmotions
USE_LDCONFIG=	yes

PORTDOCS=	Changelog README

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
