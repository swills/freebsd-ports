# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/graphics/evince-lite/Makefile 480951 2018-09-30 11:58:29Z kwm $

PKGNAMESUFFIX=	-lite

COMMENT=	GNOME 3 multi-format document viewer without the GNOME dependencies

OPTIONS_EXCLUDE=	NAUTILUS DBUS

MASTERDIR=	${.CURDIR}/../../graphics/evince
SLAVEPORT=	lite
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

post-install:
	${RM} -r ${STAGEDIR}${PREFIX}/lib/systemd

.include "${MASTERDIR}/Makefile"
