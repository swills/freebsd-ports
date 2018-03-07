# Created by: KalleDK <plexmaintainer@k-moeller.dk>
# $FreeBSD: head/multimedia/plexmediaserver-plexpass/Makefile 463406 2018-03-02 14:50:37Z feld $

PORTVERSION=	1.12.0.4829
DISTVERSIONSUFFIX=6de959918
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
