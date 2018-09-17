# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/x11-toolkits/linux-c6-openmotif/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	openmotif
PORTVERSION=	2.3.3
PORTREVISION=	4
CATEGORIES=	x11-toolkits linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Motif toolkit libraries (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../open-motif/pkg-descr
RPMVERSION=	9.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	xorglibs
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

post-patch:
	@${RM} -r ${WRKSRC}/etc ${WRKSRC}/usr/bin ${WRKSRC}/usr/include \
		${WRKSRC}/usr/share/X11 ${WRKSRC}/usr/share/man

.include <bsd.port.mk>
