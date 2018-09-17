# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/databases/iowow/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	iowow
PORTVERSION=	1.2.13
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
