# Created by: Jason Bacon <bacon4000@gmail.com>
# $FreeBSD: head/biology/fastx-toolkit/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	fastx_toolkit
PORTVERSION=	0.0.14
CATEGORIES=	biology

MAINTAINER=	bacon4000@gmail.com
COMMENT=	CLI tools for Short-Reads FASTA/FASTQ files preprocessing

LICENSE=	AGPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgtextutils.so:biology/libgtextutils

USES=		autoreconf libtool perl5 pkgconfig shebangfix
USE_PERL5=	run
SHEBANG_FILES=	scripts/*.pl

USE_GITHUB=	yes
GH_ACCOUNT=	agordon

GNU_CONFIGURE=	yes

.include <bsd.port.mk>
