# $FreeBSD: head/sysutils/fusefs-squashfuse/Makefile 421635 2016-09-09 19:42:46Z amdmi3 $

PORTNAME=	squashfuse
PORTVERSION=	0.1.100
CATEGORIES=	sysutils
PKGNAMEPREFIX=	fusefs-

MAINTAINER=	jsmith@resonatingmedia.com
COMMENT=	Mount a squashfs archive and treat it like a local file system

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	vasi

USES=		autoreconf fuse libtool pkgconfig
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/squashfuse bin/squashfuse_ll man/man1/squashfuse.1.gz

.include <bsd.port.mk>
