# Created by: Robert Gogolok <gogo@cs.uni-sb.de>
# $FreeBSD$

PORTNAME=	bundler
PORTVERSION=	2.0.2
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Tool that manages gem dependencies for ruby applications

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/bundle bin/bundler
GEM_MANUALS_SEC1=	${GEM_LIB_DIR}/man/bundle-add.1	\
			${GEM_LIB_DIR}/man/bundle-binstubs.1 \
			${GEM_LIB_DIR}/man/bundle-check.1 \
			${GEM_LIB_DIR}/man/bundle-clean.1 \
			${GEM_LIB_DIR}/man/bundle-config.1 \
			${GEM_LIB_DIR}/man/bundle-doctor.1 \
			${GEM_LIB_DIR}/man/bundle-exec.1 \
			${GEM_LIB_DIR}/man/bundle-gem.1 \
			${GEM_LIB_DIR}/man/bundle-info.1 \
			${GEM_LIB_DIR}/man/bundle-init.1 \
			${GEM_LIB_DIR}/man/bundle-inject.1 \
			${GEM_LIB_DIR}/man/bundle-install.1 \
			${GEM_LIB_DIR}/man/bundle-list.1 \
			${GEM_LIB_DIR}/man/bundle-lock.1 \
			${GEM_LIB_DIR}/man/bundle-open.1 \
			${GEM_LIB_DIR}/man/bundle-outdated.1 \
			${GEM_LIB_DIR}/man/bundle-package.1 \
			${GEM_LIB_DIR}/man/bundle-platform.1 \
			${GEM_LIB_DIR}/man/bundle-pristine.1 \
			${GEM_LIB_DIR}/man/bundle-remove.1 \
			${GEM_LIB_DIR}/man/bundle-show.1 \
			${GEM_LIB_DIR}/man/bundle-update.1 \
			${GEM_LIB_DIR}/man/bundle-viz.1 \
			${GEM_LIB_DIR}/man/bundle.1
GEM_MANUALS_SEC5=	${GEM_LIB_DIR}/man/gemfile.5

.include <bsd.port.mk>
