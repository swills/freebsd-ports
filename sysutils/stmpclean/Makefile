# Created by: shalunov
# $FreeBSD: head/sysutils/stmpclean/Makefile 441979 2017-05-29 11:32:14Z antoine $

PORTNAME=	stmpclean
PORTVERSION=	0.3
CATEGORIES=	sysutils security
MASTER_SITES=	http://shlang.com/stmpclean/

MAINTAINER=	shalunov@shlang.com
COMMENT=	Remove old files from temporary directories

USES=		groff
PLIST_FILES=	sbin/stmpclean man/man8/stmpclean.8.gz

post-patch:
	@${REINPLACE_CMD} -e "s/-O6//g" ${WRKSRC}/Makefile

.include <bsd.port.mk>
