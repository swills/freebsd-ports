# Created by: KalleDK <plexmaintainer@k-moeller.dk>
# $FreeBSD: head/multimedia/plexmediaserver-plexpass/Makefile 477873 2018-08-23 14:13:48Z feld $

PORTVERSION=	1.13.6.5339
DISTVERSIONSUFFIX=115f087d6
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
