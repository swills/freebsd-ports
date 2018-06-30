# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/databases/postgresql-plproxy/Makefile 473169 2018-06-24 00:54:27Z linimon $

PORTNAME=	plproxy
DISTVERSIONPREFIX=	${PORTNAME}_
DISTVERSION=	2_8
CATEGORIES=	databases
PKGNAMEPREFIX=	postgresql-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PL/Proxy - Function-based sharding for PostgreSQL

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

USES=		bison gmake pgsql
LLD_UNSAFE=	yes
USE_GITHUB=	yes

post-patch:
	@${REINPLACE_CMD} -e '/^#ifdef/ s| SYS_| HAVE_SYS_|' ${WRKSRC}/src/execute.c

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/plproxy.so

.include <bsd.port.mk>
