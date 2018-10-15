# Created by: Evgeny Zhirnov <jirnov@gmail.com>
# $FreeBSD: head/sysutils/archivemount/Makefile 481108 2018-10-02 09:38:31Z amdmi3 $

PORTNAME=	archivemount
DISTVERSION=	0.8.1
CATEGORIES=	sysutils
MASTER_SITES=	http://www.cybernoia.de/software/archivemount/

MAINTAINER=	jirnov@gmail.com
COMMENT=	Mount archives with FUSE

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		fuse gmake iconv libarchive pkgconfig
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/archivemount \
		man/man1/archivemount.1.gz

.include <bsd.port.mk>
