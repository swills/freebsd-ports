# Created by: Kevin Bowling <kbowling@freebsd.org>
# $FreeBSD: head/databases/timescaledb/Makefile 474732 2018-07-16 12:48:40Z swills $

PORTNAME=	timescaledb
PORTVERSION=	0.10.1
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
