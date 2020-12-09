# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD$

PORTNAME=	utf8proc
DISTVERSIONPREFIX=	v
DISTVERSION=	2.6.0
CATEGORIES=	textproc devel

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	UTF-8 processing library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

TEST_DEPENDS=	curl:ftp/curl \
		ruby${RUBY_SUFFIX}:lang/ruby${RUBY_SUFFIX}

USES=		gmake perl5

USE_GITHUB=	yes
GH_ACCOUNT=	JuliaStrings
USE_LDCONFIG=	yes
USE_PERL5=	test
USE_RUBY=	yes
RUBY_NO_BUILD_DEPENDS=	yes
RUBY_NO_RUN_DEPENDS=	yes

MAKE_ARGS=	prefix=${PREFIX}

TEST_TARGET=	check
TEST_ENV+=	LC_ALL=en_US.UTF-8

CONFLICTS=	libutf8proc-[0-9]*

PLIST_FILES=	include/utf8proc.h \
		lib/libutf8proc.a \
		lib/libutf8proc.so \
		lib/libutf8proc.so.2 \
		lib/libutf8proc.so.2.4.0 \
		libdata/pkgconfig/libutf8proc.pc
PORTDOCS=	NEWS.md README.md

OPTIONS_DEFINE=	DOCS

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libutf8proc.so

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && \
	    ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
