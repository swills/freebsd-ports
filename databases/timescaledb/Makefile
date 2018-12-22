# Created by: Kevin Bowling <kbowling@freebsd.org>
# $FreeBSD: head/databases/timescaledb/Makefile 487587 2018-12-16 13:07:05Z kbowling $

PORTNAME=	timescaledb
PORTVERSION=	1.1.0
CATEGORIES=	databases

MAINTAINER=	kbowling@FreeBSD.org
COMMENT=	Time-series database built on PostgreSQL

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE-APACHE

USES=		compiler:c11 cmake:outsource pgsql:9.6,10,11 ssl

USE_GITHUB=	YES
GH_ACCOUNT=	timescale

WANT_PGSQL=	server

PLIST_SUB=	PORTVERSION=${PORTVERSION}
SUB_FILES=	pkg-message

.include <bsd.port.mk>
