# $FreeBSD: head/biology/fastx-toolkit/Makefile 470124 2018-05-16 15:13:43Z jwb $

PORTNAME=	fastx_toolkit
PORTVERSION=	0.0.14
CATEGORIES=	biology

MAINTAINER=	jwb@FreeBSD.org
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
