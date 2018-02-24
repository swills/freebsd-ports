# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/converters/ocaml-base64/Makefile 462745 2018-02-23 21:09:47Z rene $

PORTNAME=	base64
PORTVERSION=	2.0.0
DISTVERSIONPREFIX=	v
CATEGORIES=	converters
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Base64 encoding and decoding in OCaml

USE_GITHUB=	yes
GH_ACCOUNT=	mirage
GH_PROJECT=	ocaml-base64

USES=			gmake
HAS_CONFIGURE=		yes
MAKE_JOBS_UNSAFE=	yes

USE_OCAML=		yes
USE_OCAML_FINDLIB=	yes
USE_OCAMLFIND_PLIST=	yes
USE_OCAML_LDCONFIG=	yes
DOCSDIR=	${PREFIX}/share/doc/pcre-ocaml

CONFIGURE_ARGS=		--destdir="${DESTDIRNAME}"

.include <bsd.port.mk>
