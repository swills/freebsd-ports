# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/graphics/evince-lite/Makefile 469682 2018-05-11 18:10:20Z pi $

PKGNAMESUFFIX=	-lite

COMMENT=	GNOME 3 multi-format document viewer without the GNOME dependancies

OPTIONS_EXCLUDE=	NAUTILUS

MASTERDIR=	${.CURDIR}/../../graphics/evince
SLAVEPORT=	lite
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

post-install:
	${RM} -r ${STAGEDIR}${PREFIX}/lib/systemd

.include "${MASTERDIR}/Makefile"
