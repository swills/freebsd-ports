# Created by: KalleDK <plexmaintainer@k-moeller.dk>
# $FreeBSD: head/multimedia/plexmediaserver-plexpass/Makefile 460815 2018-02-03 14:17:01Z feld $

PORTVERSION=	1.11.1.4760
DISTVERSIONSUFFIX=58bcb2957
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
