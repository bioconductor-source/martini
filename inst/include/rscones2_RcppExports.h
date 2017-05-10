// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_rscones2_RCPPEXPORTS_H_GEN_
#define RCPP_rscones2_RCPPEXPORTS_H_GEN_

#include <RcppEigen.h>
#include <Rcpp.h>

namespace rscones2 {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("rscones2", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("rscones2", "rscones2_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in rscones2");
            }
        }
    }

    inline List getRegressionStats(Eigen::MatrixXd X, Eigen::VectorXd Y) {
        typedef SEXP(*Ptr_getRegressionStats)(SEXP,SEXP);
        static Ptr_getRegressionStats p_getRegressionStats = NULL;
        if (p_getRegressionStats == NULL) {
            validateSignature("List(*getRegressionStats)(Eigen::MatrixXd,Eigen::VectorXd)");
            p_getRegressionStats = (Ptr_getRegressionStats)R_GetCCallable("rscones2", "rscones2_getRegressionStats");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_getRegressionStats(Rcpp::wrap(X), Rcpp::wrap(Y));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline Eigen::VectorXd maxflow(Eigen::SparseMatrix<double,Eigen::ColMajor> lW, Eigen::VectorXd c) {
        typedef SEXP(*Ptr_maxflow)(SEXP,SEXP);
        static Ptr_maxflow p_maxflow = NULL;
        if (p_maxflow == NULL) {
            validateSignature("Eigen::VectorXd(*maxflow)(Eigen::SparseMatrix<double,Eigen::ColMajor>,Eigen::VectorXd)");
            p_maxflow = (Ptr_maxflow)R_GetCCallable("rscones2", "rscones2_maxflow");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_maxflow(Rcpp::wrap(lW), Rcpp::wrap(c));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Eigen::VectorXd >(rcpp_result_gen);
    }

    inline List readGWAS(std::string pedBasename, std::string phenoFile, std::string netPath, unsigned int encoding, double maf) {
        typedef SEXP(*Ptr_readGWAS)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_readGWAS p_readGWAS = NULL;
        if (p_readGWAS == NULL) {
            validateSignature("List(*readGWAS)(std::string,std::string,std::string,unsigned int,double)");
            p_readGWAS = (Ptr_readGWAS)R_GetCCallable("rscones2", "rscones2_readGWAS");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_readGWAS(Rcpp::wrap(pedBasename), Rcpp::wrap(phenoFile), Rcpp::wrap(netPath), Rcpp::wrap(encoding), Rcpp::wrap(maf));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline List runScones(Eigen::MatrixXd X, Eigen::VectorXd Y, Eigen::SparseMatrix<double,Eigen::ColMajor> network, Rcpp::List userSettings) {
        typedef SEXP(*Ptr_runScones)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_runScones p_runScones = NULL;
        if (p_runScones == NULL) {
            validateSignature("List(*runScones)(Eigen::MatrixXd,Eigen::VectorXd,Eigen::SparseMatrix<double,Eigen::ColMajor>,Rcpp::List)");
            p_runScones = (Ptr_runScones)R_GetCCallable("rscones2", "rscones2_runScones");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_runScones(Rcpp::wrap(X), Rcpp::wrap(Y), Rcpp::wrap(network), Rcpp::wrap(userSettings));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

}

#endif // RCPP_rscones2_RCPPEXPORTS_H_GEN_
