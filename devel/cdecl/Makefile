# Created by: David O'Brien (obrien@NUXI.com)
# $FreeBSD: head/devel/cdecl/Makefile 442855 2017-06-07 17:22:59Z ler $

PORTNAME=	cdecl
PORTVERSION=	3.3
DISTVERSIONPREFIX=	${PORTNAME}-
CATEGORIES=	devel

MAINTAINER=	ler@FreeBSD.org
COMMENT=	Explains complicated C/C++ declarations in plain English

LICENSE=	GPLv3

BUILD_DEPENDS=	flex:textproc/flex

CONFLICTS=	cutils-[0-9]*

USES=		autoreconf bison ncurses readline

USE_GITHUB=	yes

GH_ACCOUNT=	paul-j-lucas

GNU_CONFIGURE=	yes
PLIST_FILES=	bin/cdecl bin/c++decl man/man1/cdecl.1.gz man/man1/c++decl.1.gz

.include <bsd.port.mk>
