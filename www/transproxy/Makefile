# Created by: Peter Wemm <peter@netplex.com.au>
# $FreeBSD: head/www/transproxy/Makefile 421857 2016-09-11 17:59:07Z amdmi3 $

PORTNAME=	transproxy
PORTVERSION=	1.6
CATEGORIES=	www
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Transparent HTTP proxy for ipfw's fwd rule or IPFILTER's ipnat command

LICENSE=	BSD4CLAUSE # ish; 3 clauses but both advertising and promotion are there
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

USES=		tar:tgz

USE_RC_SUBR=	tproxy

.include <bsd.port.mk>
