# Created by: tundra
# $FreeBSD: head/misc/hb/Makefile 438924 2017-04-20 04:13:39Z miwi $

PORTNAME=	hb
PORTVERSION=	1.88
PORTREVISION=	1
CATEGORIES=	misc python
MASTER_SITES=	http://www.tundraware.com/Software/hb/

MAINTAINER=	tundra@tundraware.com
COMMENT=	Simple, but complete budget management in Python

USES=		python shebangfix

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local/bin/python|${python_CMD}|' \
		${WRKSRC}/hb.py
	@${FIND} ${WRKSRC} -name "*.bak" -delete

.include <bsd.port.mk>
