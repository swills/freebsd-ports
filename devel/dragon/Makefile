# Created by: Kurt Jaeger <fbsd-ports@opsec.eu>
# $FreeBSD: head/devel/dragon/Makefile 453923 2017-11-10 19:11:06Z pi $

PORTNAME=	dragon
PORTVERSION=	1.4.3
CATEGORIES=	devel
MASTER_SITES=	http://www.lemke-it.com/

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Combined C++ scanner/parser generator for LR compliant grammars

LICENSE=	GPLv3

LIB_DEPENDS=	liblfcbase.so:devel/lfcbase

CONFLICTS=	dragon-player

GNU_CONFIGURE=	yes
PLIST_FILES=	bin/dragon

MAKE_JOBS_UNSAFE=yes

.include <bsd.port.mk>
