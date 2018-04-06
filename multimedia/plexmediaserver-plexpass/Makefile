# Created by: KalleDK <plexmaintainer@k-moeller.dk>
# $FreeBSD: head/multimedia/plexmediaserver-plexpass/Makefile 466593 2018-04-05 19:34:12Z feld $

PORTVERSION=	1.12.2.4929
DISTVERSIONSUFFIX=29f6d1796
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
