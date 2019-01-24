# Created by: Palle Girgensohn <girgen@FreeBSD.org>
# $FreeBSD: head/databases/pgbadger/Makefile 490862 2019-01-21 13:35:02Z danfe $

PORTNAME=	pgbadger
PORTVERSION=	10.2
PORTREVISION=	1
DISTVERSIONPREFIX=v
CATEGORIES=	databases

MAINTAINER=	girgen@FreeBSD.org
COMMENT=	Very competent log analyzer for PostgreSQL

LICENSE=	PostgreSQL

BUILD_DEPENDS=	gsed:textproc/gsed

USE_GITHUB=	yes
GH_ACCOUNT=	darold

USES=		gmake perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
