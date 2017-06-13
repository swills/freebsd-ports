# Created by: Kris Moore <kmoore@FreeBSD.org>
# $FreeBSD: head/emulators/wine-staging/Makefile 424560 2016-10-24 10:18:50Z mat $

PKGNAMESUFFIX=	-staging

COMMENT=	Wine built with the Staging patchset

CONFLICTS_INSTALL=	wine-[0-9]* wine-devel-[0-9]* i386-wine-[0-9]* \
			i386-wine-staging-[0-9]* i386-wine-devel-[0-9]*

OPTIONS_SLAVE=	STAGING
OPTIONS_DEFAULT=	LIBXSLT MPG123 HAL V4L X11

MASTERDIR=	${.CURDIR}/../wine-devel
PLIST=		${MASTERDIR}/pkg-plist

.include "${MASTERDIR}/Makefile"
