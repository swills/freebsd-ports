# Created by: Hiroyuki Iwatsuki <don@na.rim.or.jp>
# $FreeBSD: head/devel/ruby-subversion/Makefile 481744 2018-10-10 15:39:51Z lev $

PKGNAMEPREFIX=	ruby-

MAINTAINER=	lev@FreeBSD.org
COMMENT=	Ruby bindings for version control system

BROKEN_powerpc64=	fails to compile: swigutil_rb.c: 'ruby_errinfo' undeclared

USE_RUBY=	yes

PORTREVISION_110=	0
PORTREVISION_19=	0

SVN_BUILD_BINDINGS=	yes

.include "${.CURDIR}/../../devel/subversion/Makefile.addons"

CATEGORIES+=	ruby

CONFIGURE_ARGS+=	--without-gnome-keyring \
			--without-kwallet \
			--with-apxs=no

ALL_TARGET=	swig-rb-lib swig-rb
INSTALL_TARGET=	install-swig-rb

.include <bsd.port.post.mk>
