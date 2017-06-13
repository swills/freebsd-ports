# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: head/deskutils/multisync-backup/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	multisync-backup

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multisync backup plugin

RUN_DEPENDS=	multisync:deskutils/multisync

DISTINFO_FILE=	${MASTERDIR}/distinfo
PATCHDIR=	${.CURDIR}/files
PLIST=		${.CURDIR}/pkg-plist

WRKSRC=		${WRKDIR}/multisync-${PORTVERSION}/plugins/backup_plugin

MASTERDIR=	${.CURDIR}/../multisync

.include "${MASTERDIR}/Makefile"
