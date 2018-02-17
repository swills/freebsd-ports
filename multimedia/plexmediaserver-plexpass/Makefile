# Created by: KalleDK <plexmaintainer@k-moeller.dk>
# $FreeBSD: head/multimedia/plexmediaserver-plexpass/Makefile 462051 2018-02-16 18:03:56Z feld $

PORTVERSION=	1.11.3.4803
DISTVERSIONSUFFIX=c40bba82e
PORTREVISION=	0
PKGNAMESUFFIX=	-plexpass

MAINTAINER=	feld@FreeBSD.org

USE_RC_SUBR=	${PORTNAME}_plexpass

MASTERDIR=${.CURDIR}/../plexmediaserver

DISTINFO_FILE=	${.CURDIR}/distinfo
FILESDIR=	${.CURDIR}/files
DATADIR=	${PREFIX}/share/${PORTNAME}${PKGNAMESUFFIX}

SUB_LIST=	PORTNAME=${PORTNAME}_plexpass DATADIR=${DATADIR} USERS=${USERS} GROUPS=${GROUPS}

.include "${MASTERDIR}/Makefile"
