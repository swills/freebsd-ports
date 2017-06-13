# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: head/deskutils/multisync-syncml/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	multisync-syncml

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multisync plugin for SyncML targets

RUN_DEPENDS=	multisync:deskutils/multisync

DISTINFO_FILE=	${MASTERDIR}/distinfo
PATCHDIR=	${.CURDIR}/files
PLIST=		${.CURDIR}/pkg-plist

WRKSRC=		${WRKDIR}/multisync-${PORTVERSION}/plugins/syncml_plugin

MASTERDIR=	${.CURDIR}/../multisync

.include "${MASTERDIR}/Makefile"
