# Created by: Kevin Bowling <kbowling@freebsd.org>
# $FreeBSD: head/databases/timescaledb/Makefile 483846 2018-11-02 20:25:49Z kbowling $

PORTNAME=	timescaledb
PORTVERSION=	1.0.0
CATEGORIES=	databases

MAINTAINER=	kbowling@FreeBSD.org
COMMENT=	Time-series database built on PostgreSQL

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE-APACHE

USES=		compiler:c11 cmake:outsource pgsql:9.6,10 ssl

USE_GITHUB=	YES
GH_ACCOUNT=	timescale

WANT_PGSQL=	server

PLIST_SUB=	PORTVERSION=${PORTVERSION}
SUB_FILES=	pkg-message

.include <bsd.port.mk>
