# Created by: Kevin Bowling <kbowling@freebsd.org>
# $FreeBSD: head/databases/timescaledb/Makefile 477252 2018-08-15 19:06:12Z swills $

PORTNAME=	timescaledb
PORTVERSION=	0.11.0
CATEGORIES=	databases

MAINTAINER=	kbowling@FreeBSD.org
COMMENT=	Time-series database built on PostgreSQL

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c11 cmake:outsource pgsql:9.6,10

USE_GITHUB=	YES
GH_ACCOUNT=	timescale

WANT_PGSQL=	server

PLIST_SUB=	PORTVERSION=${PORTVERSION}
SUB_FILES=	pkg-message

.include <bsd.port.mk>
