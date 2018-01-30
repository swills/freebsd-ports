# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/x11-toolkits/linux-c7-openmotif/Makefile 460332 2018-01-29 20:25:22Z tijl $

PORTNAME=	motif
PORTVERSION=	2.3.4
PORTREVISION=	5
CATEGORIES=	x11-toolkits linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Motif toolkit libraries (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../open-${PORTNAME}/pkg-descr
RPMVERSION=	12.el7_4
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	xorglibs
USE_LINUX_RPM=	yes

post-patch:
	@${RM} -r ${WRKSRC}/etc ${WRKSRC}/usr/bin ${WRKSRC}/usr/include \
		${WRKSRC}/usr/share/X11 ${WRKSRC}/usr/share/man

.include <bsd.port.mk>
